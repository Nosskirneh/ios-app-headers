//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EDAMAdParameters, NSString;

@interface EDAMgetAds_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    EDAMAdParameters *__adParameters;
    _Bool __authenticationToken_isset;
    _Bool __adParameters_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetAdParameters;
- (_Bool)adParametersIsSet;
@property(retain, nonatomic, getter=adParameters, setter=setAdParameters:) EDAMAdParameters *adParameters; // @dynamic adParameters;
- (void)unsetAuthenticationToken;
- (_Bool)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken; // @dynamic authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 adParameters:(id)arg2;

@end

