//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEImageStyle, GLUELabelStyle, NSString;

@interface SPTFreeTierPlaylistHeaderContentViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_metadataLabelStyle;
    GLUEImageStyle *_imageStyle;
    double _entityImageTopMargin;
    double _entityImageShadowOpacity;
    double _entityImageShadowRadius;
    struct CGSize _entityImageShadowOffset;
}

@property(nonatomic) double entityImageShadowRadius; // @synthesize entityImageShadowRadius=_entityImageShadowRadius;
@property(nonatomic) double entityImageShadowOpacity; // @synthesize entityImageShadowOpacity=_entityImageShadowOpacity;
@property(nonatomic) struct CGSize entityImageShadowOffset; // @synthesize entityImageShadowOffset=_entityImageShadowOffset;
@property(nonatomic) double entityImageTopMargin; // @synthesize entityImageTopMargin=_entityImageTopMargin;
@property(retain, nonatomic) GLUEImageStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
@property(retain, nonatomic) GLUELabelStyle *metadataLabelStyle; // @synthesize metadataLabelStyle=_metadataLabelStyle;
@property(retain, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

