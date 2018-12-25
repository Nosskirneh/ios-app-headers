//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GAPICustomHttpPattern, GAPIMediaDownload, GAPIMediaUpload, NSMutableArray, NSString;

@interface GAPIHttpRule : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalBindingsArray; // @dynamic additionalBindingsArray;
@property(readonly, nonatomic) unsigned long long additionalBindingsArray_Count; // @dynamic additionalBindingsArray_Count;
@property(retain, nonatomic) NSMutableArray *authorizationsArray; // @dynamic authorizationsArray;
@property(readonly, nonatomic) unsigned long long authorizationsArray_Count; // @dynamic authorizationsArray_Count;
@property(copy, nonatomic) NSString *body; // @dynamic body;
@property(retain, nonatomic) GAPICustomHttpPattern *custom; // @dynamic custom;
@property(copy, nonatomic) NSString *delete_p; // @dynamic delete_p;
@property(copy, nonatomic) NSString *get; // @dynamic get;
@property(nonatomic) _Bool hasMediaDownload; // @dynamic hasMediaDownload;
@property(nonatomic) _Bool hasMediaUpload; // @dynamic hasMediaUpload;
@property(retain, nonatomic) GAPIMediaDownload *mediaDownload; // @dynamic mediaDownload;
@property(retain, nonatomic) GAPIMediaUpload *mediaUpload; // @dynamic mediaUpload;
@property(copy, nonatomic) NSString *patch; // @dynamic patch;
@property(readonly, nonatomic) int patternOneOfCase; // @dynamic patternOneOfCase;
@property(copy, nonatomic) NSString *post; // @dynamic post;
@property(copy, nonatomic) NSString *put; // @dynamic put;
@property(copy, nonatomic) NSString *responseBody; // @dynamic responseBody;
@property(copy, nonatomic) NSString *restCollection; // @dynamic restCollection;
@property(copy, nonatomic) NSString *restMethodName; // @dynamic restMethodName;
@property(copy, nonatomic) NSString *selector; // @dynamic selector;

@end

