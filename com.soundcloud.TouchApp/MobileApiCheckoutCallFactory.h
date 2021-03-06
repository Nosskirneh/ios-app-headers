//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RequestCreatorFactory;

@interface MobileApiCheckoutCallFactory : NSObject
{
    RequestCreatorFactory *_requestCreatorFactory;
}

@property(readonly, nonatomic) RequestCreatorFactory *requestCreatorFactory; // @synthesize requestCreatorFactory=_requestCreatorFactory;
- (void).cxx_destruct;
- (id)makeApiCallWithRequestObject:(id)arg1;
- (id)updateRequestObjectWithCheckoutToken:(id)arg1 state:(id)arg2 reason:(id)arg3 payload:(id)arg4;
- (id)startRequestObjectWithProductIdentifier:(id)arg1;
- (id)getCheckout:(id)arg1;
- (id)updateCheckout:(id)arg1 state:(id)arg2 reason:(id)arg3 payload:(id)arg4;
- (id)startCheckoutWithProductIdentifier:(id)arg1;
- (id)init;

@end

