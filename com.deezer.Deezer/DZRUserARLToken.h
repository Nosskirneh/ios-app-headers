//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DZRUserARLToken : NSObject
{
}

+ (_Bool)deleteDataForFilename:(id)arg1;
+ (id)getDataFromFilename:(id)arg1;
+ (_Bool)saveData:(id)arg1 inFileWithName:(id)arg2;
+ (id)absoluteCachePathFromRelativeDirectory:(id)arg1;
+ (_Bool)deleteSavedARL;
+ (_Bool)saveARL:(id)arg1 forLogin:(id)arg2 withPendingPayment:(_Bool)arg3 withTermsConditionsURL:(id)arg4;
+ (id)fetchARL;

@end

