//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GCKColor, NSString;

@interface GCKMediaTextTrackStyle : NSObject <NSCopying, NSSecureCoding>
{
    double _fontScale;
    GCKColor *_foregroundColor;
    GCKColor *_backgroundColor;
    long long _edgeType;
    GCKColor *_edgeColor;
    long long _windowType;
    GCKColor *_windowColor;
    double _windowRoundedCornerRadius;
    NSString *_fontFamily;
    long long _fontGenericFamily;
    long long _fontStyle;
    id _customData;
}

+ (_Bool)supportsSecureCoding;
+ (id)createDefault;
@property(retain, nonatomic) id customData; // @synthesize customData=_customData;
@property(nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
@property(nonatomic) long long fontGenericFamily; // @synthesize fontGenericFamily=_fontGenericFamily;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(nonatomic) double windowRoundedCornerRadius; // @synthesize windowRoundedCornerRadius=_windowRoundedCornerRadius;
@property(copy, nonatomic) GCKColor *windowColor; // @synthesize windowColor=_windowColor;
@property(nonatomic) long long windowType; // @synthesize windowType=_windowType;
@property(copy, nonatomic) GCKColor *edgeColor; // @synthesize edgeColor=_edgeColor;
@property(nonatomic) long long edgeType; // @synthesize edgeType=_edgeType;
@property(copy, nonatomic) GCKColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) GCKColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) double fontScale; // @synthesize fontScale=_fontScale;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)JSONObject;
- (id)initWithJSONObject:(id)arg1;
- (id)init;
- (id)initWithFontScale:(double)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3 edgeType:(long long)arg4 edgeColor:(id)arg5 windowType:(long long)arg6 windowColor:(id)arg7 windowRoundedCornerRadius:(double)arg8 fontFamily:(id)arg9 fontGenericFamily:(long long)arg10 fontStyle:(long long)arg11 customData:(id)arg12;

@end

