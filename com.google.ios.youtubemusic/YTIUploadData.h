//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIUploadData_EditData;

@interface YTIUploadData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUploadData_EditData *editData; // @dynamic editData;
@property(copy, nonatomic) NSString *filename; // @dynamic filename;
@property(copy, nonatomic) NSString *frontendUploadId; // @dynamic frontendUploadId;
@property(nonatomic) _Bool hasEditData; // @dynamic hasEditData;
@property(nonatomic) _Bool hasFilename; // @dynamic hasFilename;
@property(nonatomic) _Bool hasFrontendUploadId; // @dynamic hasFrontendUploadId;
@property(nonatomic) _Bool hasSentBytes; // @dynamic hasSentBytes;
@property(nonatomic) unsigned long long sentBytes; // @dynamic sentBytes;

@end

