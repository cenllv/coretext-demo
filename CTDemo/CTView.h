//
//  CTView.h
//  CoreTextMagazine
//
//  Created by Marin Todorov on 8/11/11.
//  Copyright 2011 Marin Todorov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTColumnView.h"

@interface CTView : UIScrollView<UIScrollViewDelegate> {

    float frameXOffset;
    float frameYOffset;

    NSAttributedString* attString;
    
    NSMutableArray* frames;
    NSArray* images;
}

@property (strong, nonatomic) NSAttributedString* attString;
@property (strong, nonatomic) NSMutableArray* frames;
@property (strong, nonatomic) NSArray* images;

-(void)buildFrames;
-(void)setAttString:(NSAttributedString *)attString withImages:(NSArray*)imgs;
-(void)attachImagesWithFrame:(CTFrameRef)f inColumnView:(CTColumnView*)col;

@end
