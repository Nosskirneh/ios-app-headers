//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTRouterParameters : NSObject
{
    NSString *_identifier;
    NSString *_version;
    NSString *_cacheIdentifier;
}

+ (id)hashCacheIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *cacheIdentifier; // @synthesize cacheIdentifier=_cacheIdentifier;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)init;

@end

