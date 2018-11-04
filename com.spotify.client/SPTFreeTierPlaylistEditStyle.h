//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUEEmptyStateViewStyle, GLUETableViewStyle, NSString, SPTFreeTierPlaylistEditHeaderViewStyle, SPTFreeTierPlaylistTextViewCellStyle;

@interface SPTFreeTierPlaylistEditStyle : NSObject <GLUEStyle>
{
    SPTFreeTierPlaylistTextViewCellStyle *_textViewCellStyle;
    GLUEEmptyStateViewStyle *_emptyEditViewStyle;
    GLUETableViewStyle *_tableViewStyle;
    SPTFreeTierPlaylistEditHeaderViewStyle *_headerViewStyle;
    double _emptyViewHeight;
}

@property(nonatomic) double emptyViewHeight; // @synthesize emptyViewHeight=_emptyViewHeight;
@property(copy, nonatomic) SPTFreeTierPlaylistEditHeaderViewStyle *headerViewStyle; // @synthesize headerViewStyle=_headerViewStyle;
@property(copy, nonatomic) GLUETableViewStyle *tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
@property(copy, nonatomic) GLUEEmptyStateViewStyle *emptyEditViewStyle; // @synthesize emptyEditViewStyle=_emptyEditViewStyle;
@property(copy, nonatomic) SPTFreeTierPlaylistTextViewCellStyle *textViewCellStyle; // @synthesize textViewCellStyle=_textViewCellStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
