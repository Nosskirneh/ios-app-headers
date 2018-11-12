//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "GLUEStyleable-Protocol.h"

@class NSString;

@interface SPTAssistedCurationAddAccessoryButton : UIButton <GLUEStyleable>
{
    id _context;
    struct CGSize _size;
    struct CGSize _iconSize;
}

@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

