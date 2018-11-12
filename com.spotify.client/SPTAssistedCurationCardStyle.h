//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEEntityRowStyle, GLUELabelStyle, GLUETrackMultipleAccessoriesViewStyle, NSString, SPTAssistedCurationAddAccessoryStyle, UIColor;

@interface SPTAssistedCurationCardStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    double _cornerRadius;
    GLUELabelStyle *_titleStyle;
    double _titleMargin;
    GLUEEntityRowStyle *_rowStyle;
    GLUETrackMultipleAccessoriesViewStyle *_subtitleAccessoryViewStyle;
    double _tableTitleOffset;
    SPTAssistedCurationAddAccessoryStyle *_addAccessoryStyle;
    double _loadMoreHeight;
}

@property(nonatomic) double loadMoreHeight; // @synthesize loadMoreHeight=_loadMoreHeight;
@property(retain, nonatomic) SPTAssistedCurationAddAccessoryStyle *addAccessoryStyle; // @synthesize addAccessoryStyle=_addAccessoryStyle;
@property(nonatomic) double tableTitleOffset; // @synthesize tableTitleOffset=_tableTitleOffset;
@property(retain, nonatomic) GLUETrackMultipleAccessoriesViewStyle *subtitleAccessoryViewStyle; // @synthesize subtitleAccessoryViewStyle=_subtitleAccessoryViewStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *rowStyle; // @synthesize rowStyle=_rowStyle;
@property(nonatomic) double titleMargin; // @synthesize titleMargin=_titleMargin;
@property(retain, nonatomic) GLUELabelStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

