//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTICommand, YTIFormattedString;

@interface YTIAnalyticsSimpleTableCardRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *detailsEndpoint; // @dynamic detailsEndpoint;
@property(nonatomic) _Bool hasDetailsEndpoint; // @dynamic hasDetailsEndpoint;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleDescription; // @dynamic hasTitleDescription;
@property(retain, nonatomic) NSMutableArray *rowsArray; // @dynamic rowsArray;
@property(readonly, nonatomic) unsigned long long rowsArray_Count; // @dynamic rowsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIFormattedString *titleDescription; // @dynamic titleDescription;

@end

