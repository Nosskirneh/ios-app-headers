//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEReusable-Protocol.h"
#import "GLUEStatefulItem-Protocol.h"
#import "GLUEStyleable-Protocol.h"

@class GLUEEntityRowStyle, UIView;
@protocol GLUEEntityRowContent;

@protocol GLUEEntityRow <GLUEStatefulItem, GLUEStyleable, GLUEReusable>
@property(retain, nonatomic) UIView *trailingAccessoryView;
@property(retain, nonatomic) UIView<GLUEEntityRowContent> *entityContentView;
@property(retain, nonatomic) UIView *leadingAccessoryView;
- (void)glue_applyStyle:(GLUEEntityRowStyle *)arg1;
@end

