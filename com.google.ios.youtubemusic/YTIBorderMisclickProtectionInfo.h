//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIBorderMisclickProtectionInfo_BorderEdgeSize;

@interface YTIBorderMisclickProtectionInfo : GPBMessage
{
}

+ (id)descriptor;
- (struct CGRect)clickableAreaWithFrame:(struct CGSize)arg1;

// Remaining properties
@property(retain, nonatomic) YTIBorderMisclickProtectionInfo_BorderEdgeSize *bottom; // @dynamic bottom;
@property(nonatomic) _Bool hasBottom; // @dynamic hasBottom;
@property(nonatomic) _Bool hasLeft; // @dynamic hasLeft;
@property(nonatomic) _Bool hasRight; // @dynamic hasRight;
@property(nonatomic) _Bool hasTop; // @dynamic hasTop;
@property(retain, nonatomic) YTIBorderMisclickProtectionInfo_BorderEdgeSize *left; // @dynamic left;
@property(retain, nonatomic) YTIBorderMisclickProtectionInfo_BorderEdgeSize *right; // @dynamic right;
@property(retain, nonatomic) YTIBorderMisclickProtectionInfo_BorderEdgeSize *top; // @dynamic top;

@end
