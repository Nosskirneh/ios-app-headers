//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface S3Response : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *debugLineArray; // @dynamic debugLineArray;
@property(readonly, nonatomic) unsigned long long debugLineArray_Count; // @dynamic debugLineArray_Count;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(copy, nonatomic) NSString *errorDescription; // @dynamic errorDescription;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(nonatomic) _Bool hasErrorDescription; // @dynamic hasErrorDescription;
@property(nonatomic) _Bool hasMessageIndex; // @dynamic hasMessageIndex;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) long long messageIndex; // @dynamic messageIndex;
@property(nonatomic) int status; // @dynamic status;

@end

