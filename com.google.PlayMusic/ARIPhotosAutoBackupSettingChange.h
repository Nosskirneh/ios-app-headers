//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARIPhotosAutoBackupSettingChange_AutoBackupOptions, ARITwoStateSettingValue;

@interface ARIPhotosAutoBackupSettingChange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ARIPhotosAutoBackupSettingChange_AutoBackupOptions *autoBackupOptions; // @dynamic autoBackupOptions;
@property(nonatomic) _Bool hasAutoBackupOptions; // @dynamic hasAutoBackupOptions;
@property(nonatomic) _Bool hasNewValue; // @dynamic hasNewValue;
@property(retain, nonatomic) ARITwoStateSettingValue *newValue; // @dynamic newValue;

@end

