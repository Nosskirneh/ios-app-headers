//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface DZRDeveloperGatekeeperModuleItem : NSObject
{
    _Bool _activated;
    _Bool _needsRestart;
    NSString *_name;
    NSNumber *_mobileStatus;
    NSNumber *_userStatus;
    NSNumber *_codeStatus;
    NSNumber *_manualStatus;
}

+ (id)itemWithModuleName:(id)arg1;
@property _Bool needsRestart; // @synthesize needsRestart=_needsRestart;
@property _Bool activated; // @synthesize activated=_activated;
@property(retain) NSNumber *manualStatus; // @synthesize manualStatus=_manualStatus;
@property(retain) NSNumber *codeStatus; // @synthesize codeStatus=_codeStatus;
@property(retain) NSNumber *userStatus; // @synthesize userStatus=_userStatus;
@property(retain) NSNumber *mobileStatus; // @synthesize mobileStatus=_mobileStatus;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly) NSString *statusSymbol;
- (void)update;
- (id)initWithModuleName:(id)arg1;

@end
