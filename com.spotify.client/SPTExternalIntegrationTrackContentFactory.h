//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTOfflineManager;

@interface SPTExternalIntegrationTrackContentFactory : NSObject
{
    id <SPTOfflineManager> _offlineManager;
}

@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
- (void).cxx_destruct;
- (id)createContentWithTrack:(id)arg1 requestOptions:(id)arg2;
- (id)initWithOfflineManager:(id)arg1;

@end

