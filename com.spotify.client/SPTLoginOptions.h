//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTLoginOptions : NSObject
{
    NSString *_apSrvHostOverride;
    NSString *_apHostOverride;
    NSString *_apResolverHostOverride;
    NSString *_canonicalUsername;
}

+ (id)defaultLoginOptions;
@property(retain, nonatomic) NSString *canonicalUsername; // @synthesize canonicalUsername=_canonicalUsername;
@property(retain, nonatomic) NSString *apResolverHostOverride; // @synthesize apResolverHostOverride=_apResolverHostOverride;
@property(retain, nonatomic) NSString *apHostOverride; // @synthesize apHostOverride=_apHostOverride;
@property(retain, nonatomic) NSString *apSrvHostOverride; // @synthesize apSrvHostOverride=_apSrvHostOverride;
- (void).cxx_destruct;
- (struct LoginOptions)cppLoginOptions;
- (void)persistGlobalApHostOverride:(id)arg1;

@end

