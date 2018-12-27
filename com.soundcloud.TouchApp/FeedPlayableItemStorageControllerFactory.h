//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AuthHooks, CoreDataStorageRequestControllerFactory;

@interface FeedPlayableItemStorageControllerFactory : NSObject
{
    CoreDataStorageRequestControllerFactory *_factory;
    AuthHooks *_authHooks;
}

@property(readonly, nonatomic) AuthHooks *authHooks; // @synthesize authHooks=_authHooks;
@property(readonly, nonatomic) CoreDataStorageRequestControllerFactory *factory; // @synthesize factory=_factory;
- (void).cxx_destruct;
- (id)defaultFeedTitle;
- (id)requestOptions;
- (id)requestProperties;
- (id)requestForItemsInDefaultFeed;
- (id)requestForItemsInFeedWithId:(id)arg1;
- (id)feedPlayableItemsInFeedWithId:(id)arg1;
- (id)feedStreamPlayableItemsInFeedWithId:(id)arg1 inlayAds:(id)arg2;
- (id)initWithFactory:(id)arg1 authHooks:(id)arg2;
- (id)init;

@end

