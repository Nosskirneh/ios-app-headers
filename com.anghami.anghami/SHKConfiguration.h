//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DefaultSHKConfigurator;

@interface SHKConfiguration : NSObject
{
    DefaultSHKConfigurator *configurator;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstanceWithConfigurator:(id)arg1;
+ (id)sharedInstance;
@property(readonly, retain) DefaultSHKConfigurator *configurator; // @synthesize configurator;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfigurator:(id)arg1;
- (id)configurationValue:(id)arg1 withObject:(id)arg2;

@end
