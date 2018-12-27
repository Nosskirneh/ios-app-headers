//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RequestCreatorFactory;

@interface MobileSearchCallFactory : NSObject
{
    RequestCreatorFactory *_requestCreatorFactory;
}

@property(readonly, nonatomic) RequestCreatorFactory *requestCreatorFactory; // @synthesize requestCreatorFactory=_requestCreatorFactory;
- (void).cxx_destruct;
- (id)requestParametersForQuery:(id)arg1 queryUrn:(id)arg2;
- (id)pathForSearchFilterType:(long long)arg1;
- (id)apiCallForRequestObject:(id)arg1 modelClass:(Class)arg2 apiQueue:(id)arg3;
- (id)apiCallForUrl:(id)arg1;
- (id)apiCallForQuery:(id)arg1 filterType:(long long)arg2 queryUrn:(id)arg3;
- (id)init;

@end

