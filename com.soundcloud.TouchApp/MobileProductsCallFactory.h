//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RequestCreatorFactory, _TtC4Core9ApiConfig;

@interface MobileProductsCallFactory : NSObject
{
    _TtC4Core9ApiConfig *_apiConfig;
    RequestCreatorFactory *_requestCreatorFactory;
}

@property(readonly, nonatomic) RequestCreatorFactory *requestCreatorFactory; // @synthesize requestCreatorFactory=_requestCreatorFactory;
@property(readonly, nonatomic) _TtC4Core9ApiConfig *apiConfig; // @synthesize apiConfig=_apiConfig;
- (void).cxx_destruct;
- (id)apiCall;
- (id)init;

@end

