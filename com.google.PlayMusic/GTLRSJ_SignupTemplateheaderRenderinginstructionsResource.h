//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSJ_ImageRef, GTLRSJ_SignupTemplateheaderRenderinginstructionsBackgroundcoloroverrideResource, NSString;

@interface GTLRSJ_SignupTemplateheaderRenderinginstructionsResource : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *backgroundColorHexString; // @dynamic backgroundColorHexString;
@property(retain, nonatomic) GTLRSJ_SignupTemplateheaderRenderinginstructionsBackgroundcoloroverrideResource *backgroundColorOverride; // @dynamic backgroundColorOverride;
@property(retain, nonatomic) GTLRSJ_ImageRef *backgroundImageRef; // @dynamic backgroundImageRef;
@property(retain, nonatomic) GTLRSJ_ImageRef *imageRef; // @dynamic imageRef;

@end
