//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TV4Api4PanelLink : NSObject
{
    _Bool _linkAsButton;
    NSString *_link;
    NSString *_linkText;
}

+ (id)panelLinkWithDictionary:(id)arg1;
@property(nonatomic) _Bool linkAsButton; // @synthesize linkAsButton=_linkAsButton;
@property(copy, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

