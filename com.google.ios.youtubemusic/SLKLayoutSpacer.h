//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SLKLayoutItem-Protocol.h"

@class NSString;

@interface SLKLayoutSpacer : NSObject <SLKLayoutItem>
{
    struct CGSize _size;
    _Bool hidden;
    long long semanticContentAttribute;
    CDUnknownBlockType _sizingBlock;
    struct CGRect frame;
}

+ (id)spacerWithSizingBlock:(CDUnknownBlockType)arg1;
+ (id)spacerWithSize:(struct CGSize)arg1;
@property(copy, nonatomic) CDUnknownBlockType sizingBlock; // @synthesize sizingBlock=_sizingBlock;
@property(nonatomic) long long semanticContentAttribute; // @synthesize semanticContentAttribute;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden;
@property(nonatomic) struct CGRect frame; // @synthesize frame;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (struct CGSize)sizeOfLayoutWithFrame:(struct CGRect)arg1 updateLayout:(_Bool)arg2;
- (id)initWithSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

