//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "GLUETrackCloud.h"

@class GLUELabel, GLUETrackCloudView, NSString;

@interface GLUETrackCloudTableViewCell : UITableViewCell <GLUETrackCloud>
{
    GLUETrackCloudView *_trackCloudView;
}

+ (double)heightForTrackCloudWithTitle:(id)arg1 data:(id)arg2 containerWidth:(double)arg3 style:(id)arg4;
@property(readonly, nonatomic) GLUETrackCloudView *trackCloudView; // @synthesize trackCloudView=_trackCloudView;
- (void).cxx_destruct;
- (void)updateContentWithData:(id)arg1 andContainerWidth:(double)arg2;
- (void)glue_applyStyle:(id)arg1;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) GLUELabel *titleLabel;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

