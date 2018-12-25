//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface OrchDocumentDownload : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *documentToken; // @dynamic documentToken;
@property(copy, nonatomic) NSString *documentURL; // @dynamic documentURL;
@property(copy, nonatomic) NSString *failedToLoadRetryText; // @dynamic failedToLoadRetryText;
@property(nonatomic) _Bool hasDocumentToken; // @dynamic hasDocumentToken;
@property(nonatomic) _Bool hasDocumentURL; // @dynamic hasDocumentURL;
@property(nonatomic) _Bool hasFailedToLoadRetryText; // @dynamic hasFailedToLoadRetryText;
@property(nonatomic) _Bool hasRequestMessage; // @dynamic hasRequestMessage;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(copy, nonatomic) NSString *requestMessage; // @dynamic requestMessage;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end
