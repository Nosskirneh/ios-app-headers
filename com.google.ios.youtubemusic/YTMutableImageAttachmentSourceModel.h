//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTImageAttachmentSourceModel.h"

@class NSData, NSString;

@interface YTMutableImageAttachmentSourceModel : YTImageAttachmentSourceModel
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) unsigned int height; // @dynamic height;
@property(nonatomic) unsigned int width; // @dynamic width;
@property(retain, nonatomic) NSData *imageData; // @dynamic imageData;
@property(retain, nonatomic) NSString *URL; // @dynamic URL;

@end

