//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UIViewController;

@interface SPTCanvasPlaylistViewCell : UICollectionViewCell
{
    UIViewController *_canvasViewController;
    UIColor *_selectedCellColor;
}

@property(retain, nonatomic) UIColor *selectedCellColor; // @synthesize selectedCellColor=_selectedCellColor;
@property(nonatomic) __weak UIViewController *canvasViewController; // @synthesize canvasViewController=_canvasViewController;
- (void).cxx_destruct;
- (void)animateWithAnimations:(CDUnknownBlockType)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;

@end

