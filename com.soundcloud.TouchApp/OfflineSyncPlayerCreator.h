//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativePlayerCreator-Protocol.h"

@class NSString;
@protocol AVAssetResourceLoaderDelegate;

@interface OfflineSyncPlayerCreator : NSObject <NativePlayerCreator>
{
    id <AVAssetResourceLoaderDelegate> _resourceLoaderDelegate;
}

@property(readonly, nonatomic) id <AVAssetResourceLoaderDelegate> resourceLoaderDelegate; // @synthesize resourceLoaderDelegate=_resourceLoaderDelegate;
- (void).cxx_destruct;
- (id)playerWithDelegateLoader:(id)arg1;
- (id)playerForTrack:(id)arg1;
- (id)initWithResourceLoaderDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
