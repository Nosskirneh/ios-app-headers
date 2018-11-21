//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol SPTCanvasModel <NSObject>
@property(readonly, copy, nonatomic) NSURL *placeholderURI;
@property(readonly, copy, nonatomic) NSURL *entityURI;
@property(readonly, nonatomic) NSString *artistName;
@property(readonly, nonatomic) NSURL *artistURI;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, copy, nonatomic) NSString *contentId;
@property(readonly, copy, nonatomic) NSURL *contentURL;
@property(readonly, copy, nonatomic) NSString *canvasId;
@end

