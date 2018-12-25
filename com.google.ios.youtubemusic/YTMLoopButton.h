//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMButton.h"

@class NSArray, UIImage;

@interface YTMLoopButton : QTMButton
{
    UIImage *_deselectedLoopImage;
    UIImage *_selectedLoopImage;
    UIImage *_selectedLoopOneImage;
    NSArray *_loopModeImages;
    NSArray *_loopAccessibilityLabels;
    unsigned long long _loopMode;
}

@property(nonatomic) unsigned long long loopMode; // @synthesize loopMode=_loopMode;
- (void).cxx_destruct;
- (void)updateButtonState;
- (_Bool)isValidLoopMode:(unsigned long long)arg1;
- (void)didTap:(id)arg1;
- (id)init;

@end

