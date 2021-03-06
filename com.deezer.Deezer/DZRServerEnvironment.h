//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRServerEnvironment-Protocol.h"

@class NSString;
@protocol DZRServerEnvironment;

@interface DZRServerEnvironment : NSObject <DZRServerEnvironment>
{
    id <DZRServerEnvironment> _defaultEnvironment;
    id <DZRServerEnvironment> _userDefinedEnvironment;
}

+ (id)defaultEnvironment;
+ (id)stringWithServerType:(unsigned long long)arg1;
@property(retain, nonatomic) id <DZRServerEnvironment> userDefinedEnvironment; // @synthesize userDefinedEnvironment=_userDefinedEnvironment;
@property(retain, nonatomic) id <DZRServerEnvironment> defaultEnvironment; // @synthesize defaultEnvironment=_defaultEnvironment;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *devName;
@property(readonly, nonatomic) unsigned long long type;
- (id)currentEnvironment;
- (void)setType:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1 devName:(id)arg2;
- (id)initWithDefaultEnvironment:(id)arg1;
- (id)serverTypeString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

