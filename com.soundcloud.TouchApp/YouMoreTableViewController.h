//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseTableViewController.h"

@class AdjustMarketingEventTagger, AnalyticsUpsellEventTagger, SCPlanManager, YouMoreControllerDataSource, YouMoreService;

@interface YouMoreTableViewController : BaseTableViewController
{
    YouMoreControllerDataSource *_dataSource;
    YouMoreService *_youMoreService;
    AnalyticsUpsellEventTagger *_analyticsUpsellTagger;
    SCPlanManager *_planManager;
    AdjustMarketingEventTagger *_adjustMarketingEventTagger;
}

@property(retain, nonatomic) AdjustMarketingEventTagger *adjustMarketingEventTagger; // @synthesize adjustMarketingEventTagger=_adjustMarketingEventTagger;
@property(retain, nonatomic) SCPlanManager *planManager; // @synthesize planManager=_planManager;
@property(retain, nonatomic) AnalyticsUpsellEventTagger *analyticsUpsellTagger; // @synthesize analyticsUpsellTagger=_analyticsUpsellTagger;
@property(nonatomic) __weak YouMoreService *youMoreService; // @synthesize youMoreService=_youMoreService;
@property(nonatomic) __weak YouMoreControllerDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)tagUpsellImpressionEvent;
- (void)setupNavigationItem;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (id)sourceContext;
- (long long)screen;

@end

