# $NetBSD: Makefile,v 1.20 2017/06/05 14:23:29 ryoon Exp $

DISTNAME=	PerlIO-eol-0.16
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=PerlIO/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/PerlIO-eol/
COMMENT=	Perl module for normalizing line endings
LICENSE=	${PERL5_LICENSE}

PERL5_PACKLIST=		auto/PerlIO/eol/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
