//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GIDSignInCallbackSchemes : NSObject
{
    NSString *_clientIdentifier;
}

+ (id)relevantURLSchemes;
- (void).cxx_destruct;
- (_Bool)URLSchemeIsCallbackScheme:(id)arg1;
- (id)unsupportedSchemes;
- (id)allSchemes;
- (id)clientIdentifierScheme;
- (id)initWithClientIdentifier:(id)arg1;
- (id)init;

@end
