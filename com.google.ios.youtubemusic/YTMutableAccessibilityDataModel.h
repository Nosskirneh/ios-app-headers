//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTAccessibilityDataModel.h"

@class NSData, NSString, YTAccessibilityIdModel;

@interface YTMutableAccessibilityDataModel : YTAccessibilityDataModel
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) YTAccessibilityIdModel *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) NSString *accessibilityIdentifier_p; // @dynamic accessibilityIdentifier_p;

@end
