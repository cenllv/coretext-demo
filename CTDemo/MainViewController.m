//
//  MainViewController.m
//  CTDemo
//
//  Created by Martins Rudens on 7/4/13.
//  Copyright (c) 2013 IDEA BITS. All rights reserved.
//

#import "MainViewController.h"
#import "MarkupParser.h"

@implementation MainViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    ctView = [[CTView alloc] initWithFrame:self.view.bounds];
    [self.view addSubview:ctView];
    NSString *path = [[NSBundle mainBundle] pathForResource:@"zombies" ofType:@"txt"];
    NSString *text = [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:NULL];
    MarkupParser *p = [[MarkupParser alloc] init];
    [ctView setAttString:[p attrStringFromMarkup:text] withImages:p.images];
    [ctView buildFrames];
}

@end
