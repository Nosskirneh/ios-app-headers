//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingScrollProvider-Protocol.h"

@class NSString, SPTConcertsScrollViewController;

@interface SPTConcertsNowPlayingScrollProvider : NSObject <SPTNowPlayingScrollProvider>
{
    SPTConcertsScrollViewController *_concertsViewController;
}

@property(retain, nonatomic) SPTConcertsScrollViewController *concertsViewController; // @synthesize concertsViewController=_concertsViewController;
- (void).cxx_destruct;
- (_Bool)needsLayoutUpdateAfterLoadForTrack:(id)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (id)componentViewForTrack:(id)arg1;
- (void)loadContentForTrack:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadContentForTrack:(id)arg1;
- (_Bool)isEnabledForTrack:(id)arg1;
- (id)identifier;
- (id)initWithNowPlayingCardViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
