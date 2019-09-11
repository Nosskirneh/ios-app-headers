//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTCanvasViewController;
@protocol SPTCanvasModel;

@protocol SPTCanvasModelLoadDelegate <NSObject>
- (void)didFailToLoadCanvasModel:(id <SPTCanvasModel>)arg1 forViewController:(SPTCanvasViewController *)arg2;
- (void)didLoadCanvasModel:(id <SPTCanvasModel>)arg1 forViewController:(SPTCanvasViewController *)arg2;
- (void)willLoadCanvasModel:(id <SPTCanvasModel>)arg1 forViewController:(SPTCanvasViewController *)arg2;
@end

