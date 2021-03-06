//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLyricsTrackChecker-Protocol.h"

@class NSString, SPTLyricsV2Service;

@interface SPTLyricsTrackCheckerImplementation : NSObject <SPTLyricsTrackChecker>
{
    SPTLyricsV2Service *_lyricsService;
}

@property(readonly, nonatomic) SPTLyricsV2Service *lyricsService; // @synthesize lyricsService=_lyricsService;
- (void).cxx_destruct;
- (_Bool)lyricsAvailableForTrack:(id)arg1;
- (id)initWithLyricsService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

