//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAdsOfflineServices-Protocol.h"

@class GIMMe, NSString, YTAdPlaylistCreationController;

@interface YTRealAdsOfflineServices : NSObject <YTAdsOfflineServices>
{
    YTAdPlaylistCreationController *_adPlaylistCreator;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)adPlaylistCreationWorker;
- (id)adPlaylistCreator;
- (id)workers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

