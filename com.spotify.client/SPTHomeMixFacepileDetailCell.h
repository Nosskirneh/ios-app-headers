//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GLUELabel, SPTHomeMixMemberPileContainerView;

@interface SPTHomeMixFacepileDetailCell : UITableViewCell
{
    GLUELabel *_name;
    GLUELabel *_reason;
    SPTHomeMixMemberPileContainerView *_facePileView;
}

@property(readonly, nonatomic) SPTHomeMixMemberPileContainerView *facePileView; // @synthesize facePileView=_facePileView;
@property(readonly, nonatomic) GLUELabel *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) GLUELabel *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

