//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface DZUserLicenseStoreManager : NSObject
{
    NSObject<OS_dispatch_queue> *_licenseFSQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *licenseFSQueue; // @synthesize licenseFSQueue=_licenseFSQueue;
- (void).cxx_destruct;
- (_Bool)isDataExistForUser:(id)arg1 andFileName:(id)arg2;
- (void)deleteDataForUser:(id)arg1 andFileName:(id)arg2;
- (id)retreiveDataForUser:(id)arg1 andFileName:(id)arg2;
- (void)saveData:(id)arg1 forUser:(id)arg2 withFileName:(id)arg3;
- (id)init;

@end

