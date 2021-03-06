//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface GRWAppGroup : NSObject
{
    unsigned long long _currentAppGroupType;
    NSURL *_containerURLForCurrentAppGroup;
}

+ (id)containerURLForCommonAppGroup;
+ (id)commonAppGroupIdentifier;
+ (unsigned long long)commonAppGroupType;
+ (id)sharedInstance;
@property(retain, nonatomic) NSURL *containerURLForCurrentAppGroup; // @synthesize containerURLForCurrentAppGroup=_containerURLForCurrentAppGroup;
@property(nonatomic) unsigned long long currentAppGroupType; // @synthesize currentAppGroupType=_currentAppGroupType;
- (void).cxx_destruct;
- (id)appGroupIdentifierForType:(unsigned long long)arg1;
- (void)logSetupErrorIfNeeded;
- (void)determineAppGroup;
- (id)init;

@end

