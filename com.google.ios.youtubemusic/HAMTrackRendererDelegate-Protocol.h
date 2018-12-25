//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol HAMTrackRenderer;

@protocol HAMTrackRendererDelegate <NSObject>
- (void)trackRendererMustStop:(id <HAMTrackRenderer>)arg1 resumeAutomatically:(_Bool)arg2;
- (void)trackRenderer:(id <HAMTrackRenderer>)arg1 seekableTimeRangeDidChange:(CDStruct_e83c9415)arg2;
- (void)trackRenderer:(id <HAMTrackRenderer>)arg1 setMediaTime:(CDStruct_1b6d18a9)arg2;
- (void)trackRenderer:(id <HAMTrackRenderer>)arg1 failedWithError:(NSError *)arg2;
@end
