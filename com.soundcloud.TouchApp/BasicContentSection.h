//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ContentSection-Protocol.h"

@class NSString;
@protocol ContentHandler, ContentPresenter, ContentSource;

@interface BasicContentSection : NSObject <ContentSection>
{
    id <ContentHandler> _handler;
    id <ContentPresenter> _presenter;
    id <ContentSource> _source;
}

@property(readonly, nonatomic) id <ContentSource> source; // @synthesize source=_source;
@property(readonly, nonatomic) id <ContentPresenter> presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic) id <ContentHandler> handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (id)initWithHandler:(id)arg1 presenter:(id)arg2 source:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

