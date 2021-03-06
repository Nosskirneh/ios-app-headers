//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OfflineSyncUsageTaggerDataProviding-Protocol.h"

@class NSManagedObjectContext, NSString;

@interface OfflineUsageTaggerDataProvider : NSObject <OfflineSyncUsageTaggerDataProviding>
{
    _Bool _asynchronous;
    NSManagedObjectContext *_context;
}

@property(nonatomic) _Bool asynchronous; // @synthesize asynchronous=_asynchronous;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)operation:(CDUnknownBlockType)arg1;
- (void)metadataForUrns:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)metadataForUrn:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1 asynchronous:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

