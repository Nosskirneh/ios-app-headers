//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTCanvasModel;

@protocol SPTCanvasContentLayerImagePreloaderDelegate <NSObject>
- (void)didFailToPreloadImageForCanvasModel:(id <SPTCanvasModel>)arg1 withError:(NSError *)arg2;
- (void)didPreloadImageForCanvasModel:(id <SPTCanvasModel>)arg1;
- (void)willPreloadImageForCanvasModel:(id <SPTCanvasModel>)arg1;
@end

