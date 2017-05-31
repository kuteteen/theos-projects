/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "VKAPTabViewControllerProtocol.h"
#import "UITableViewDataSource.h"
#import "vkclient-Structs.h"
#import "MKMapViewDelegate.h"
#import "VKMLiveController.h"
#import "CLLocationManagerDelegate.h"

@class UIView, CLLocation, TGLocationMapView, VKAPLocationStorage, CLLocationManager, UIButton, CLGeocoder, TGLocationAnnotation, NSString, PlacesSearchModel, TGLocationPinView, VKPPNoAccessView;

__attribute__((visibility("hidden")))
@interface VKAPPlacesViewController : VKMLiveController <UITableViewDataSource, UITableViewDelegate, MKMapViewDelegate, CLLocationManagerDelegate, VKAPTabViewControllerProtocol> {
	BOOL _locationServicesDisabled;
	BOOL _mapInFullScreenMode;
	BOOL _pinMovedFromUserLocation;
	int _thumbSize;
	id _expandParent;
	id _setGestureState;
	id _locationAttachAction;
	CLLocationManager* _locationManager;
	CLLocation* _currentUserLocation;
	VKAPLocationStorage* _locationStorage;
	TGLocationAnnotation* _annotation;
	TGLocationAnnotation* _customAnnotation;
	UIView* _mapViewWrapper;
	TGLocationMapView* _mapView;
	UIView* _pickerPinWrapper;
	TGLocationPinView* _pickerPinView;
	CLGeocoder* _geocoder;
	UIButton* _locationButton;
	VKPPNoAccessView* _noAccessView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id locationAttachAction;
@property(copy, nonatomic) id setGestureState;
@property(copy, nonatomic) id expandParent;
@property(assign, nonatomic) int thumbSize;
@property(retain, nonatomic) PlacesSearchModel* model;
@property(retain, nonatomic) VKPPNoAccessView* noAccessView;
@property(retain, nonatomic) UIButton* locationButton;
@property(retain, nonatomic) CLGeocoder* geocoder;
@property(retain, nonatomic) TGLocationPinView* pickerPinView;
@property(retain, nonatomic) UIView* pickerPinWrapper;
@property(assign, nonatomic) BOOL pinMovedFromUserLocation;
@property(assign, nonatomic) BOOL mapInFullScreenMode;
@property(retain, nonatomic) TGLocationMapView* mapView;
@property(retain, nonatomic) UIView* mapViewWrapper;
@property(retain, nonatomic) TGLocationAnnotation* customAnnotation;
@property(retain, nonatomic) TGLocationAnnotation* annotation;
@property(retain, nonatomic) VKAPLocationStorage* locationStorage;
@property(retain, nonatomic) CLLocation* currentUserLocation;
@property(assign, nonatomic) BOOL locationServicesDisabled;
@property(retain, nonatomic) CLLocationManager* locationManager;
-(void).cxx_destruct;
-(void)sendCoordinate:(CLLocationCoordinate2D)coordinate;
-(void)sendLocation;
-(void)userLocationButtonPressed;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)layoutMap;
-(void)updateCurrentLocationButtonAlpha;
-(void)updatePickerPinMode;
-(void)pickerPinMode:(BOOL)mode;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)updateAnnotationWithCoordinate:(CLLocationCoordinate2D)coordinate;
-(void)switchToVenuesTableView;
-(void)switchToFullscreenMapAnimated:(BOOL)fullscreenMapAnimated;
-(void)updateCurrentLocationCell;
-(void)actionSettingsButton:(id)button;
-(void)updateNoAccessView;
-(void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
-(BOOL)requestWhenInUserLocationAuthorizationWithLocationManager:(id)locationManager;
-(XXStruct_zkbX1B)MKMapRectForCoordinateRegion:(XXStruct_zkbX1B)coordinateRegion;
-(void)setMapCenterCoordinate:(CLLocationCoordinate2D)coordinate span:(CLLocationCoordinate2D)span offset:(CGPoint)offset animated:(BOOL)animated;
-(void)setMapCenterCoordinate:(CLLocationCoordinate2D)coordinate animated:(BOOL)animated;
-(CLLocationCoordinate2D)mapCenterCoordinateForPickerPin;
-(void)pinPinView;
-(void)mapView:(id)view regionDidChangeAnimated:(BOOL)region;
-(void)mapView:(id)view regionWillChangeAnimated:(BOOL)region;
-(void)setCurrentUserLocation:(id)location storeLocation:(BOOL)location2 updateMapView:(BOOL)view;
-(void)updatePlacesModel:(id)model;
-(void)mapView:(id)view didUpdateUserLocation:(id)location;
-(id)currentLocation;
-(void)hidePickerAnnotationAnimated:(bool)animated;
-(void)showPickerAnnotationAnimated:(bool)animated;
-(void)updatePickerAnnotation;
-(id)mapView:(id)view viewForAnnotation:(id)annotation;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)vkApMinimized;
-(id)initWithMain:(id)main andModel:(id)model;
-(id)scrollView;
-(void)VKMControllerChromeInsetsApply;
-(int)VKMTableSearchMode;
-(BOOL)VKMScrollViewDisablePTR;
-(void)VKMNavigationBarUpdate;
@end

