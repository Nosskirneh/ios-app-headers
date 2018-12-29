//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ApiCoreDataAdapter-Protocol.h"

@class MobileUserAdapter, NSString, YouRepository;
@protocol _TtP8Features15KeyValueStoring_;

@interface MobileYouAdapter : NSObject <ApiCoreDataAdapter>
{
    YouRepository *_youRepository;
    MobileUserAdapter *_userAdapter;
    id <_TtP8Features15KeyValueStoring_> _keyValueStore;
}

@property(readonly, nonatomic) id <_TtP8Features15KeyValueStoring_> keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(readonly, nonatomic) MobileUserAdapter *userAdapter; // @synthesize userAdapter=_userAdapter;
@property(readonly, nonatomic) YouRepository *youRepository; // @synthesize youRepository=_youRepository;
- (void).cxx_destruct;
- (void)storeYouPermalink:(id)arg1;
- (id)adaptObject:(id)arg1;
- (id)initWithYouRepository:(id)arg1 userAdapter:(id)arg2 keyValueStore:(id)arg3;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
