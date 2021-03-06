//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RequestCreatorFactory;

@interface ProfileCallFactory : NSObject
{
    RequestCreatorFactory *_requestCreatorFactory;
}

@property(readonly, nonatomic) RequestCreatorFactory *requestCreatorFactory; // @synthesize requestCreatorFactory=_requestCreatorFactory;
- (void).cxx_destruct;
- (id)requestObjectForPath:(id)arg1;
- (id)apiCallForRequestObject:(id)arg1 responseParser:(Class)arg2;
- (id)apiCallForUserWithIdentifier:(id)arg1;
- (id)init;

@end

