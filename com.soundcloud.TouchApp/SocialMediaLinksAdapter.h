//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSEntityDescription, NSManagedObjectContext;

@interface SocialMediaLinksAdapter : NSObject
{
    NSManagedObjectContext *_context;
    NSEntityDescription *_entityDescription;
}

@property(readonly, nonatomic) NSEntityDescription *entityDescription; // @synthesize entityDescription=_entityDescription;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)existingSocialMediaLinkWithTitle:(id)arg1 network:(id)arg2 url:(id)arg3 user:(id)arg4;
- (void)adaptSocialMediaItems:(id)arg1 user:(id)arg2;
- (void)deleteExistingSocialMediaLinks:(id)arg1;
- (void)adapt:(id)arg1 user:(id)arg2;
- (id)initWithManagedObjectContext:(id)arg1;

@end

